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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x3775759f, "snd_soc_put_volsw" },
	{ 0x44cc6fa7, "snd_soc_get_volsw" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd750f284, "regcache_mark_dirty" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x749fffb4, "regmap_write" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0x69687740, "regcache_cache_only" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("i2c:ssm4567");
MODULE_ALIAS("acpi*:INT343B:*");

MODULE_INFO(srcversion, "44D5DF4BAE2E6FDEA8D604F");
MODULE_INFO(rhelversion, "8.0");
