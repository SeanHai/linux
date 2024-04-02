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
	{ 0xa025b7f7, "phy_drivers_unregister" },
	{ 0x5717c3a8, "phy_drivers_register" },
	{ 0xf3cec7a6, "genphy_config_init" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x24be3c5b, "mdio_device_reset" },
	{ 0x27e1a049, "printk" },
	{ 0x79fd9932, "genphy_aneg_done" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xd011e59f, "phy_modify" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:000000000100110111010000011?0110");
MODULE_ALIAS("mdio:000000000100110111010000011?0100");
MODULE_ALIAS("mdio:000000000100110111010000011?0010");

MODULE_INFO(srcversion, "BB5E2B10D60304D4F0DDAF1");
MODULE_INFO(rhelversion, "8.0");
