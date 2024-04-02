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
	{ 0x1a59bd15, "genphy_loopback" },
	{ 0x3def8b73, "genphy_read_status" },
	{ 0xa025b7f7, "phy_drivers_unregister" },
	{ 0x5717c3a8, "phy_drivers_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7b922d9a, "genphy_setup_forced" },
	{ 0xf382beca, "genphy_restart_aneg" },
	{ 0xc073679e, "genphy_config_aneg" },
	{ 0x27e1a049, "printk" },
	{ 0xc2ba2566, "phy_write_paged" },
	{ 0x5792f848, "strlcpy" },
	{ 0x50559d7b, "genphy_update_link" },
	{ 0x5dc81e22, "__phy_modify" },
	{ 0xef59cd8b, "phy_save_page" },
	{ 0xb8ded467, "genphy_soft_reset" },
	{ 0x192f5e6, "phy_read_paged" },
	{ 0x590b0d0d, "phy_modify_paged" },
	{ 0xa371e027, "genphy_suspend" },
	{ 0xdbcdb48d, "genphy_resume" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xd011e59f, "phy_modify" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0x70f3afb7, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb9e3df8, "__mdiobus_write" },
	{ 0x7d322fa9, "phy_restore_page" },
	{ 0x237f9c4d, "__mdiobus_read" },
	{ 0x187a820e, "phy_select_page" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011101010????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
MODULE_ALIAS("mdio:0000000101000001000011111001????");

MODULE_INFO(srcversion, "92F114F8F646A7F2CDC2405");
MODULE_INFO(rhelversion, "8.0");
