# [Silver III] 회장님께 바치는 합성함수 - 28418 

[문제 링크](https://www.acmicpc.net/problem/28418) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

많은 조건 분기, 구현, 수학

### 제출 일자

2023년 7월 29일 17:15:52

### 문제 설명

<p>우리의 회장님은 성격이 괴팍하다. 그의 마음에 들면 "<code>Nice</code>", "<code>Go ahead</code>"이라고 말하지만, 그의 마음에 들지 않으면 "<code>Remember my character</code>", 그의 선을 넘으면 가차 없이 "<code>Head on</code>"이라는 핍박을 듣게 된다. 그의 요구는 두 다항함수 $f(x)$와 $g(x)$를 이용하여 <a href="https://en.wikipedia.org/wiki/Composite_function">합성 함수</a>를 만드는 것이다.</p>

<p>$p(x) = f(g(x))$이고 $q(x) = g(f(x))$이다. 이때 $f(x)$의 최고차항은 2 이하이고 $g(x)$의 최고차항은 1 이하이다. 회장님은 이 두 함수 $y=p(x)$와 $y=q(x)$가 만나는 지점이 무한개인지, 2개인지, 1개인지, 0개인지에 따라 다음과 같이 말한다.</p>

<ul>
	<li>무한개: "<code>Nice</code>"</li>
	<li>2개: "<code>Go ahead</code>"</li>
	<li>1개: "<code>Remember my character</code>"</li>
	<li>0개: "<code>Head on</code>"</li>
</ul>

<p>두 함수 $y=p(x)$와 $y=q(x)$가 만나는 지점의 개수는 $p(x)-q(x)=0$을 통해 $x$축과 만나는 점의 개수를 파악하여 알 수 있다.</p>

### 입력 

 <p>첫째 줄에 함수 $f(x)$의 2차항, 1차항, 상수항의 계수가 공백으로 구분되어 차례대로 주어지고, 둘째 줄에 함수 $g(x)$의 1차항, 상수항의 계수가 공백으로 구분되어 차례대로 주어진다. </p>

<p>주어지는 계수와 상수항은 -20 이상 20이하의 정수이다</p>

### 출력 

 <p>두 함수가 닿는 점의 개수에 따라 "<code>Nice</code>", "<code>Go ahead</code>", "<code>Remember my character</code>", "<code>Head on</code>" 중 하나를 출력한다.</p>

