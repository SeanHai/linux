#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x802e99be, "kill_litter_super" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x2105444b, "default_llseek" },
	{ 0xbda976d3, "simple_statfs" },
	{ 0xb74da11c, "unregister_filesystem" },
	{ 0x2541c5a, "unregister_binfmt" },
	{ 0x2f4f3f90, "__register_binfmt" },
	{ 0x962dc318, "register_filesystem" },
	{ 0x27e1a049, "printk" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f6846e7, "d_instantiate" },
	{ 0x4d8c44a3, "simple_pin_fs" },
	{ 0xddad0649, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xeb5fdba7, "new_inode" },
	{ 0x61d9d11c, "iput" },
	{ 0xdef1d4d0, "lookup_one_len" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x373db350, "kstrtoint" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x349cba85, "strchr" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x754d539c, "strlen" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x91715312, "sprintf" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xfdcf0ea0, "simple_release_fs" },
	{ 0x7be3bf78, "d_drop" },
	{ 0x237c9e5e, "drop_nlink" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8a7667d, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1fdc54, "clear_inode" },
	{ 0x4640f1c4, "simple_fill_super" },
	{ 0xbbbcd2da, "mount_single" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf3508393, "dentry_open" },
	{ 0xba36c9a2, "kernel_read" },
	{ 0x66493b14, "would_dump" },
	{ 0x253b4b2, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x8ea170a1, "__close_fd" },
	{ 0xf7d6636f, "current_task" },
	{ 0x6190d85, "remove_arg_zero" },
	{ 0xbda28fdd, "dput" },
	{ 0x8339393a, "search_binary_handler" },
	{ 0x80f16d4e, "prepare_binprm" },
	{ 0x831ab6e7, "open_exec" },
	{ 0xb72bec71, "bprm_change_interp" },
	{ 0xdf2840b6, "copy_strings_kernel" },
	{ 0x50d83074, "fput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76A612C1A2B74E91FD8AB46");
MODULE_INFO(rhelversion, "8.0");
