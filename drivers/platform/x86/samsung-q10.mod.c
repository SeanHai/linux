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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x2e105578, "__platform_create_bundle" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x45081703, "ec_get_handle" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("dmi*:svn*Samsung*:pn*SQ10*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGElectronics*:pn*SENSQ20*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGElectronics*:pn*NQ25*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:pn*X200*:");

MODULE_INFO(srcversion, "3B4FA7D946339B8D195A1E3");
MODULE_INFO(rhelversion, "8.0");
