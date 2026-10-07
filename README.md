# HelloCV - Linux配置记录

## 一、项目结构
本仓库用于记录 Linux 基础学习、Ubuntu 环境配置以及 ROS2 安装过程。
仓库包含 `README.md` 文件。所有的图文操作记录、截图和排错过程，请点击下方的语雀文档链接查看。

## 二、环境配置步骤
1. 安装 VMware 及 Ubuntu 22.04 桌面版。
2. 配置中文输入法（IBus）。
3. 安装开发工具（VSCode、Git、Vim、tmux、SSH、nmap等）。
4. 安装 ROS2（使用鱼香ROS一键脚本，选择 Humble 桌面版）。
5. 安装 Node.js 及 PM2 进程管理工具。

## 三、语雀学习笔记链接
https://www.yuque.com/pinganxile-lypjl/hwgarh/zkbsuiyfun30v3ds/edit

## 四、遇到的主要问题及解决办法
（详细排查过程请参见语雀文档）
1. **VSCode 安装报错 NO_PUBKEY**：第三方源签名缺失。解决：通过 `grep` 查找残留文件并删除，改用官网下载 `.deb` 包安装。
2. 等待缓存锁：后台自动更新占用。解决：等待几分钟或安全的kill进程。
