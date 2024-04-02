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
	{ 0xf9a482f9, "msleep" },
	{ 0xada6de24, "snd_soc_dapm_get_enum_double" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0xe4a8c122, "snd_soc_component_update_bits" },
	{ 0x3775759f, "snd_soc_put_volsw" },
	{ 0x44cc6fa7, "snd_soc_get_volsw" },
	{ 0xc9ce3a94, "snd_soc_info_enum_double" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x6fa7e12, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0x25b78337, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf24ea3e8, "snd_soc_put_enum_double" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xb3ac59e9, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("i2c:es8316");
MODULE_ALIAS("of:N*T*Ceverest,es8316");
MODULE_ALIAS("of:N*T*Ceverest,es8316C*");
MODULE_ALIAS("acpi*:ESSX8316:*");

MODULE_INFO(srcversion, "76489CBAE68AEB6BB787DE9");
MODULE_INFO(rhelversion, "8.0");
