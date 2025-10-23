# Eller's Maze Generator

DirectX 12 기반 절차적 미로 생성 및 3D 시각화

## 프로젝트 개요

절차적 미로 생성 알고리즘인 Eller's Algorithm을 사용하여 실시간으로 미로를 생성하고, DirectX12 환경에서 3D로 렌더링하는 시스템입니다.

## 핵심 특징
- Eller's Algorithm을 기반으로 미로를 자동으로 생성, 크기나 모양을 동적으로 조절
- DirectX 12를 이용하여 실시간 3D 시각화
- 행 단위(row-by-row)처리로 메모리 사용량을 최소화

## 기술스택
| 분야 | 기술 |
|------|------|
| **Graphics API** | DirectX 12 |
| **Shaders** | HLSL (Vertex, Pixel) |
| **Language** | C++ |
| **Tools** | Visual Studio 2022 |

## 조작 방법
- W/S: 카메라 전진/후진
- A/D: 카메라 좌/우 이동
- Q/E: 카메라 상/하 이동
- 마우스 좌클릭, 이동: 시야 변경

## 요구사항
- Windows 10/11
- Visual Studio 2022
- DirectX 12 지원 GPU
- Windows SDK 10.0.19041.0 이상

## 참고자료
http://www.neocomputer.org/projects/eller.html

http://weblog.jamisbuck.org/2010/12/29/maze-generation-eller-s-algorithm
