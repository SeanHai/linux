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
	{ 0x666afe81, "devm_snd_soc_register_card" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0x21ab6e93, "snd_soc_pm_ops" },
	{ 0xd18a7958, "snd_soc_dapm_info_pin_switch" },
	{ 0x33e24e17, "snd_soc_dapm_put_pin_switch" },
	{ 0xb3071b4c, "nau8825_enable_jack_detect" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x6324408a, "hdac_hdmi_jack_port_init" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0xd6e40e2, "snd_soc_dapm_ignore_suspend" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3897eb85, "snd_soc_dapm_get_pin_switch" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb54c595, "snd_soc_dai_set_sysclk" },
	{ 0xb3bb76d6, "snd_soc_card_jack_new" },
	{ 0x46656754, "hdac_hdmi_jack_init" },
	{ 0x28318305, "snprintf" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm,snd-soc-nau8825,snd-soc-hdac-hdmi";


MODULE_INFO(srcversion, "1E7C6A97288A26BCE9FBCDD");
MODULE_INFO(rhelversion, "8.0");
