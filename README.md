# UnrealTestBug
Unreal의 Test Automation을 사용하는 도중, 버그를 발견한 것 같습니다.
작성자: 내일배움캠프 Unreal 3기 최대근

## 사용한 Engine 정보

Unreal Engine 5.5.4

## 문제 상황 설명

현재 프로젝트에서, Test 코드를 수정했지만, Unreal Engin Editor가 변경 사항을 인식하지 못하는 문제가 있습니다.


## 버그 재현 방법

프로젝트를 처음 빌드한 뒤...

(1) Live Coding이 활성화 된 상태에서는, 테스트의 변경사항이 잘 반영됩니다.

(2) 중간에 Live Coding을 비활성화 합니다. 
여기서부터 변경사항을 파악하지 못합니다.

(3) 다시 Live Coding을 활성화해도, 변경 사항을 파악하지 못합니다. 

(4) 코드를 수정한 다음, 엔진을 껏다 키면 수정 사항이 반영됩니다..

