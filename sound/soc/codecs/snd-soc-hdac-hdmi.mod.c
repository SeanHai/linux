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
	{ 0xdf32eb27, "snd_soc_dapm_kcontrol_widget" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x18471879, "hdac_get_device_id" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0xada6de24, "snd_soc_dapm_get_enum_double" },
	{ 0x2a2480b, "snd_hdac_ext_bus_get_link" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x3c318d4b, "snd_soc_add_card_controls" },
	{ 0xba912fd3, "snd_hdac_ext_bus_link_put" },
	{ 0xd18a7958, "snd_soc_dapm_info_pin_switch" },
	{ 0x33e24e17, "snd_soc_dapm_put_pin_switch" },
	{ 0x31c00626, "snd_hdac_get_sub_nodes" },
	{ 0x7b2d20e3, "snd_soc_dapm_new_controls" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x12ba1d80, "snd_hda_ext_driver_unregister" },
	{ 0x91715312, "sprintf" },
	{ 0xda381a8d, "snd_pcm_hw_constraint_eld" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x601d3d6, "snd_hdac_check_power_state" },
	{ 0xc9ce3a94, "snd_soc_info_enum_double" },
	{ 0x2519c417, "snd_soc_dapm_add_routes" },
	{ 0xb57cb8ae, "snd_pcm_hw_constraint_mask64" },
	{ 0x6f9f7d58, "snd_hda_ext_driver_register" },
	{ 0x438ae20d, "snd_hdac_display_power" },
	{ 0x37d9ebc6, "snd_hdac_acomp_get_eld" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xfc347dae, "dapm_kcontrol_get_value" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb037c1bb, "snd_hdac_setup_channel_mapping" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x465adf03, "snd_hdac_ext_bus_link_get" },
	{ 0xff5a7d10, "snd_hdac_register_chmap_ops" },
	{ 0x7a262fd9, "snd_hdac_read_parm_uncached" },
	{ 0xdd9a804a, "snd_hdac_calc_stream_format" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9c391c4b, "devm_kmemdup" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3897eb85, "snd_soc_dapm_get_pin_switch" },
	{ 0x73187668, "snd_hdac_i915_register_notifier" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0x18f517ed, "devm_kstrdup" },
	{ 0xf403d1dd, "snd_soc_dapm_new_widgets" },
	{ 0xa63322c6, "hdmi_audio_infoframe_pack" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ddf7408, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xe8d1a3be, "snd_hdac_refresh_widgets" },
	{ 0x74d6b6c2, "snd_hdac_query_supported_pcm" },
	{ 0x171d4a7a, "snd_soc_dapm_disable_pin" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0x1ea3dfab, "snd_soc_dapm_enable_pin" },
	{ 0xf5c2d34d, "hdmi_audio_infoframe_init" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdefc2c94, "snd_hdac_channel_allocation" },
	{ 0x4ac859d0, "snd_soc_jack_report" },
	{ 0x28318305, "snprintf" },
	{ 0x4bc7eb8a, "snd_hdac_add_chmap_ctls" },
	{ 0x3b51c996, "snd_hdac_sync_power_state" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4bb2d155, "snd_hdac_get_connections" },
	{ 0xb3ac59e9, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm";

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Cr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Dr00100000a02*");

MODULE_INFO(srcversion, "8A245A2F7E24C1D1F316D8F");
MODULE_INFO(rhelversion, "8.0");
