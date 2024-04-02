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
	{ 0xcd406d25, "snd_i2c_sendbytes" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x27e1a049, "printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xae307d4b, "snd_ctl_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-i2c,snd";


MODULE_INFO(srcversion, "B2D011741FE2D4518CEE89C");
MODULE_INFO(rhelversion, "8.0");
