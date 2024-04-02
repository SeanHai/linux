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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xcab4e2e6, "asus_wmi_unregister_driver" },
	{ 0xa80641b5, "asus_wmi_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0xb6d860ba, "i8042_install_filter" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=asus-wmi";


MODULE_INFO(srcversion, "E35BC9E8BFFF5055E1E54CA");
MODULE_INFO(rhelversion, "8.0");
