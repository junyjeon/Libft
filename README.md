<div align="center">
  <h1>📚 Libft</h1>
  <p>42Seoul의 첫 번째 프로젝트: C 표준 라이브러리 재구현</p>

  <img src="assets/code_review.png" alt="42 Seoul Libft Code Review" width="800"/>

  [![42 Score](https://img.shields.io/badge/Score-125%2F100-success?style=for-the-badge&logo=42)](https://github.com/junyjeon/Libft)
  [![Norminette](https://img.shields.io/badge/Norminette-passing-brightgreen?style=for-the-badge)](https://github.com/42School/norminette)
  [![Last Commit](https://img.shields.io/github/last-commit/junyjeon/Libft?style=for-the-badge)](https://github.com/junyjeon/Libft/commits)
</div>

## 📋 목차
1. [소개](#-소개)
2. [평가 결과](#-평가-결과)
3. [함수 목록](#-함수-목록)
4. [구현 상세](#-구현-상세)
5. [설치 방법](#️-설치-방법)
6. [사용 예시](#-사용-예시)
7. [트러블슈팅](#-트러블슈팅)

## 📝 소개

### 프로젝트 목표
C 표준 라이브러리의 기본 함수들을 재구현하여 이후 42 과정에서 사용할 나만의 C 라이브러리를 만듭니다.

### 개발 제약사항
- 허용 함수: `malloc`, `free`, `write`
- 모든 함수는 `ft_` 접두어 사용
- Norminette 코딩 규칙 준수
- 정의되지 않은 동작 없어야 함
- 메모리 누수 없어야 함

## 📊 평가 결과

### 최종 평가
- **점수**: 125/100 (보너스 포함)
- **평가일**: 2023.XX.XX
- **평가자 수**: 3명

### 주요 피드백
1. Memory 함수들의 엣지케이스 처리가 잘 되어있음
2. 보너스 파트의 연결리스트 구현이 깔끔함
3. 일부 함수의 성능 최적화 가능성 있음

## 📚 함수 목록

### Part 1: Libc 함수
| 함수 | 원형 | 설명 | 주요 이슈 |
|------|------|------|-----------|
| ft_memset | `void *ft_memset(void *b, int c, size_t len)` | 메모리 초기화 | 정렬 이슈 |
| ft_bzero | `void ft_bzero(void *s, size_t n)` | 0으로 초기화 | - |
| ft_memcpy | `void *ft_memcpy(void *dst, const void *src, size_t n)` | 메모리 복사 | 중첩 처리 |
[나머지 함수들...]

### Part 2: 문자열 함수
| 함수 | 원형 | 설명 | 주요 이슈 |
|------|------|------|-----------|
| ft_substr | `char *ft_substr(char const *s, unsigned int start, size_t len)` | 부분 문자열 | 메모리 최적화 |
| ft_strjoin | `char *ft_strjoin(char const *s1, char const *s2)` | 문자열 결합 | NULL 처리 |
[나머지 함수들...]

## 💡 구현 상세

### 주요 구현 사례: ft_memmove
```c
void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char       *d;
    const unsigned char *s;

    if (!dst && !src)
        return (NULL);
    if (dst <= src)
    {
        d = (unsigned char *)dst;
        s = (const unsigned char *)src;
        while (len--)
            *d++ = *s++;
    }
    else
    {
        d = (unsigned char *)dst + (len - 1);
        s = (const unsigned char *)src + (len - 1);
        while (len--)
            *d-- = *s--;
    }
    return (dst);
}
```

#### 구현 포인트
1. 메모리 중첩 고려
   - dst가 src보다 앞에 있는 경우: 정방향 복사
   - dst가 src보다 뒤에 있는 경우: 역방향 복사

2. 최적화 전략
   - 포인터 연산 최소화
   - 불필요한 메모리 할당 방지

3. 엣지케이스 처리
   - NULL 포인터 검사
   - 길이가 0인 경우 처리

## ⚙️ 설치 방법

1. 저장소 클론
```bash
git clone https://github.com/junyjeon/Libft.git
cd Libft
```

2. 컴파일
```bash
make        # 기본 라이브러리
make bonus  # 보너스 함수 포함
```

3. 테스트 (선택사항)
```bash
make test   # 테스트 실행
```

## 📖 사용 예시

### 기본 문자열 처리
```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, 42Seoul!";
    size_t len = ft_strlen(str);
    char *dup = ft_strdup(str);
    
    // 문자열 처리
    if (ft_strncmp(str, "Hello", 5) == 0)
    {
        // 작업 수행
    }
    
    free(dup);
    return (0);
}
```

### 메모리 관리
```c
void *ptr = ft_calloc(10, sizeof(int));
if (!ptr)
    return (ERROR);
// 메모리 사용
ft_bzero(ptr, 10 * sizeof(int));
// 작업 완료 후
free(ptr);
```

## 🔧 트러블슈팅

### 일반적인 문제들

1. **세그멘테이션 폴트**
   - 원인: NULL 포인터 참조, 잘못된 메모리 접근
   - 해결: 
     ```c
     if (!ptr)
         return (NULL);
     ```

2. **메모리 누수**
   - 원인: free 호출 누락, 잘못된 메모리 관리
   - 해결:
     ```c
     char *temp = ft_strdup(str);
     if (!temp)
         return (NULL);
     // 작업 수행
     free(temp);
     ```

3. **Norminette 에러**
   - 원인: 코딩 스타일 규칙 위반
   - 해결: 
     - 함수 25줄 제한 준수
     - 적절한 들여쓰기
     - 변수 선언 위치 조정

### 성능 최적화 팁
1. 불필요한 메모리 할당 피하기
2. 루프 최적화
3. 조건문 최소화

## 📚 참고 자료
- [42 Libft 서브젝트](링크)
- [C 표준 라이브러리 문서](링크)
- [Norminette 가이드](링크)

## 🤝 기여 방법
1. Fork the Project
2. Create your Feature Branch
3. Commit your Changes
4. Push to the Branch
5. Open a Pull Request

## 📝 라이센스
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details