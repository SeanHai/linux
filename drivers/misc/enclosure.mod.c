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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91018733, "device_del" },
	{ 0xd257960c, "device_register" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0xcca62a76, "device_add" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x85ffabba, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x28318305, "snprintf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BBF98FFEE7A34813E493C41");
MODULE_INFO(rhelversion, "8.0");
