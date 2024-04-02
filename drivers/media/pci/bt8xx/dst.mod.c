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
	{ 0xf9a482f9, "msleep" },
	{ 0x5a2670a3, "bt878_device_control" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xcdc0d85f, "dvb_unregister_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e9dd606, "__symbol_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bt878,dvb-core";


MODULE_INFO(srcversion, "EBD7674375ADD1F96544268");
MODULE_INFO(rhelversion, "8.0");
