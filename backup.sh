#!/bin/bash
# 极简备份脚本
src="/root/c++/workstation1"      # 修改为需要备份的目录
dest="/root/c++/backups"       # 修改为备份存放目录

mkdir -p $dest
tar -zcf $dest/backup_$(date +%Y%m%d).tar.gz $src
