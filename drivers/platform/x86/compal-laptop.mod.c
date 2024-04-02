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
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xc768d450, "power_supply_unregister" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x8368044b, "power_supply_register" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x37c5895d, "power_supply_get_drvdata" },
	{ 0xaa00fdc0, "ec_transaction" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,video";

MODULE_ALIAS("dmi*:rn*IFL90*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*IFL91*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*JFL92*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFT00*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron910*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1010*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1011*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1012*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1110*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1210*:");
MODULE_ALIAS("dmi*:rn*JHL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*KHLB2*:rvr*REFERENCE*:");

MODULE_INFO(srcversion, "E869F0572EA9D73060D20A1");
MODULE_INFO(rhelversion, "8.0");
