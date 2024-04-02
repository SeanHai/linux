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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x666afe81, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf4948a82, "bus_find_device_by_name" },
	{ 0x3c318d4b, "snd_soc_add_card_controls" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd18a7958, "snd_soc_dapm_info_pin_switch" },
	{ 0x33e24e17, "snd_soc_dapm_put_pin_switch" },
	{ 0x6a088c75, "snd_soc_dai_set_pll" },
	{ 0xe4a8c122, "snd_soc_component_update_bits" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x2519c417, "snd_soc_dapm_add_routes" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0xc5dd2896, "i2c_bus_type" },
	{ 0xf58394a, "device_add_properties" },
	{ 0xd6e40e2, "snd_soc_dapm_ignore_suspend" },
	{ 0x3897eb85, "snd_soc_dapm_get_pin_switch" },
	{ 0xe6478472, "_dev_info" },
	{ 0x291d00f4, "acpi_dev_get_first_match_name" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3639518b, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0xfb54c595, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb3bb76d6, "snd_soc_card_jack_new" },
	{ 0xf0003dd7, "snd_soc_dai_set_fmt" },
	{ 0x79758f1a, "snd_soc_dai_set_tdm_slot" },
	{ 0x28318305, "snprintf" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x6c5d2bcd, "snd_soc_acpi_find_package_from_hid" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm,snd-soc-acpi";


MODULE_INFO(srcversion, "51263D7C152924019FB66C0");
MODULE_INFO(rhelversion, "8.0");
