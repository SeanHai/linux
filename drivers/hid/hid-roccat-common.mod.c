#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xf9a482f9, "msleep" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "46E30912898344B18B1E8C7");
MODULE_INFO(rhelversion, "8.0");
