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
	{ 0x314ffb6c, "snd_hdac_power_up" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf6766881, "snd_hda_codec_load_dsp_prepare" },
	{ 0xcae2bc88, "snd_hda_multi_out_dig_prepare" },
	{ 0x1f98347e, "snd_hda_mixer_amp_volume_put" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0x460b4e9f, "snd_hda_codec_amp_stereo" },
	{ 0x85441522, "snd_hda_codec_load_dsp_trigger" },
	{ 0x6313031f, "__snd_hda_add_vmaster" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xcf01a3e7, "snd_pci_quirk_lookup" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x33017b0c, "snd_hda_mixer_amp_tlv" },
	{ 0x870e74ca, "snd_hda_jack_add_kctls" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6c0242c4, "snd_hda_mixer_amp_switch_put" },
	{ 0x27253169, "snd_hda_jack_detect_enable_callback" },
	{ 0xfb27b5dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xb3399306, "snd_hda_codec_set_name" },
	{ 0x9d8d66ee, "_snd_hda_set_pin_ctl" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x88bdc366, "snd_hda_mixer_amp_switch_get" },
	{ 0x164f080c, "snd_hdac_power_down_pm" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbbfa1784, "snd_hda_create_spdif_in_ctls" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd0c7e746, "snd_hda_override_amp_caps" },
	{ 0xdd9a804a, "snd_hdac_calc_stream_format" },
	{ 0x48812696, "snd_hda_jack_detect_state" },
	{ 0x37ed24e4, "snd_hda_jack_tbl_get" },
	{ 0xf89ffe4d, "snd_hda_sequence_write" },
	{ 0x5fa5c3ea, "snd_hda_create_spdif_share_sw" },
	{ 0x4ee6efe0, "snd_hda_ctl_add" },
	{ 0xe6478472, "_dev_info" },
	{ 0xa322e214, "snd_hda_multi_out_dig_close" },
	{ 0x9d290369, "snd_hda_create_dig_out_ctls" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xce4fa21e, "snd_hda_codec_update_widgets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1d09cee8, "snd_hda_multi_out_dig_cleanup" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x7c12eb83, "__snd_hda_codec_cleanup_stream" },
	{ 0xf5fb0a65, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x607c821d, "snd_hda_multi_out_dig_open" },
	{ 0xedc03953, "iounmap" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe7ba2461, "snd_hda_apply_pincfgs" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x6aa7c02c, "snd_hda_mixer_amp_switch_info" },
	{ 0xe47073f1, "snd_pcm_add_chmap_ctls" },
	{ 0x8d6a6d3f, "snd_hdac_power_down" },
	{ 0xe74529c7, "snd_hda_codec_setup_stream" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x488ed2fc, "snd_hda_codec_load_dsp_cleanup" },
	{ 0x193db696, "snd_hda_mixer_amp_volume_info" },
	{ 0x8be1ac4c, "snd_hda_jack_report_sync" },
	{ 0xeba55f09, "snd_hda_set_vmaster_tlv" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x14aa6182, "snd_hdac_power_up_pm" },
	{ 0x49bd4584, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4441ecbe, "snd_hda_codec_amp_update" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec,snd,snd-pcm";

MODULE_ALIAS("hdaudio:v11020011r*a01*");

MODULE_INFO(srcversion, "592B323192CB23F1E5F34D3");
MODULE_INFO(rhelversion, "8.0");
