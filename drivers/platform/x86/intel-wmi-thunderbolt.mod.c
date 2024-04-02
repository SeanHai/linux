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
	{ 0x710c007, "wmi_driver_unregister" },
	{ 0xf4d92d49, "__wmi_driver_register" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi";


MODULE_INFO(srcversion, "C966A4F307149B06CB8611D");
MODULE_INFO(rhelversion, "8.0");
