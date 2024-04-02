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
	{ 0x36a8bdec, "tpm_pm_suspend" },
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0xf41eb3c7, "tpm_chip_register" },
	{ 0xa29a929f, "tpmm_chip_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0xf6295c57, "tpm_pm_resume" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xdf89529f, "tpm_chip_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pnp:dIFX0101*");
MODULE_ALIAS("acpi*:IFX0101:*");
MODULE_ALIAS("pnp:dIFX0102*");
MODULE_ALIAS("acpi*:IFX0102:*");

MODULE_INFO(srcversion, "FB04A0A76A6E5D10C2E503F");
MODULE_INFO(rhelversion, "8.0");
