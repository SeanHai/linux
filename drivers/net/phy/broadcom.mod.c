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
	{ 0x97a2d1d4, "bcm_phy_get_strings" },
	{ 0xbec8e5c4, "bcm_phy_config_intr" },
	{ 0xff3f7f0b, "bcm_phy_ack_intr" },
	{ 0xa025b7f7, "phy_drivers_unregister" },
	{ 0x5717c3a8, "phy_drivers_register" },
	{ 0x157b166, "bcm_phy_read_exp" },
	{ 0xbf55a2d8, "bcm_phy_write_exp" },
	{ 0x3def8b73, "genphy_read_status" },
	{ 0xf901cf44, "bcm_phy_write_shadow" },
	{ 0x97155f25, "bcm_phy_read_shadow" },
	{ 0xb88522ce, "bcm54xx_auxctl_write" },
	{ 0xb16f707e, "bcm54xx_auxctl_read" },
	{ 0xc073679e, "genphy_config_aneg" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xc4c2f7f0, "bcm_phy_get_sset_count" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x8b680dd0, "bcm_phy_get_stats" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcm-phy-lib";

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0110000000001101100001001010????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111100110????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000001101100010010111010000????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
MODULE_ALIAS("mdio:0000000101000011101111001111????");
MODULE_ALIAS("mdio:0000001101100010010111001101????");

MODULE_INFO(srcversion, "FA3DE39E88C1FBB5F312CB2");
MODULE_INFO(rhelversion, "8.0");
