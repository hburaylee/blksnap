/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#include <linux/fs.h>

int get_blk_snap_major(void);

int ctrl_init(void);
void ctrl_done(void);

int ctrl_open(struct inode *inode, struct file *file);
int ctrl_release(struct inode *inode, struct file *file);

ssize_t ctrl_read(struct file *filp, char __user *buffer, size_t length, loff_t *offset);
ssize_t ctrl_write(struct file *filp, const char __user *buffer, size_t length, loff_t *offset);

unsigned int ctrl_poll(struct file *filp, struct poll_table_struct *wait);

long ctrl_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
