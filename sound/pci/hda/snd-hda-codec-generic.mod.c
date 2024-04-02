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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2fba9c80, "snd_hda_codec_get_pin_target" },
	{ 0x349cba85, "strchr" },
	{ 0xcae2bc88, "snd_hda_multi_out_dig_prepare" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x1f98347e, "snd_hda_mixer_amp_volume_put" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0xc71a63ec, "snd_hda_get_default_vref" },
	{ 0x3951e901, "snd_hda_enum_helper_info" },
	{ 0x85e5434f, "snd_hda_apply_fixup" },
	{ 0x19389d24, "snd_hda_sync_vmaster_hook" },
	{ 0x460b4e9f, "snd_hda_codec_amp_stereo" },
	{ 0x6313031f, "__snd_hda_add_vmaster" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x33017b0c, "snd_hda_mixer_amp_tlv" },
	{ 0x870e74ca, "snd_hda_jack_add_kctls" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x9342a799, "snd_hda_check_amp_list_power" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe118de5d, "snd_pcm_2_1_chmaps" },
	{ 0x6c0242c4, "snd_hda_mixer_amp_switch_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x27253169, "snd_hda_jack_detect_enable_callback" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdd582b2e, "snd_hda_check_amp_caps" },
	{ 0xfb27b5dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xa8c57f5d, "snd_hdac_regmap_write_raw" },
	{ 0x11089ac7, "_ctype" },
	{ 0x9d8d66ee, "_snd_hda_set_pin_ctl" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x45fdf6a6, "snd_hda_attach_beep_device" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe8d7aaa9, "snd_hda_codec_set_pin_target" },
	{ 0x88bdc366, "snd_hda_mixer_amp_switch_get" },
	{ 0x72624050, "snd_hda_get_conn_list" },
	{ 0x59427e5b, "snd_ctl_boolean_stereo_info" },
	{ 0xe5aed7db, "snd_hda_multi_out_analog_prepare" },
	{ 0x39034ddb, "snd_hda_multi_out_analog_cleanup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa8f9b878, "is_jack_detectable" },
	{ 0xbbfa1784, "snd_hda_create_spdif_in_ctls" },
	{ 0xbce0e05a, "snd_hda_codec_amp_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0xe3a53f4c, "sort" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0x7f9552e1, "snd_hda_get_int_hint" },
	{ 0x48812696, "snd_hda_jack_detect_state" },
	{ 0x37ed24e4, "snd_hda_jack_tbl_get" },
	{ 0x2609b020, "snd_hda_find_mixer_ctl" },
	{ 0x5fa5c3ea, "snd_hda_create_spdif_share_sw" },
	{ 0xf572c733, "snd_hda_get_bool_hint" },
	{ 0x864a3415, "snd_hda_multi_out_analog_open" },
	{ 0x22baeb14, "snd_hda_get_conn_index" },
	{ 0xa322e214, "snd_hda_multi_out_dig_close" },
	{ 0x9d290369, "snd_hda_create_dig_out_ctls" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0x2a918164, "snd_hda_correct_pin_ctl" },
	{ 0xe5314ef8, "snd_hda_add_imux_item" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7c61eadd, "snd_hda_get_pin_label" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1d09cee8, "snd_hda_multi_out_dig_cleanup" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x7340ea6a, "snd_ctl_sync_vmaster" },
	{ 0x7c12eb83, "__snd_hda_codec_cleanup_stream" },
	{ 0xf5fb0a65, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xc40ea0d8, "snd_hda_add_vmaster_hook" },
	{ 0x69acdf38, "memcpy" },
	{ 0x607c821d, "snd_hda_multi_out_dig_open" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe7b0c875, "snd_hda_codec_get_pincfg" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x6aa7c02c, "snd_hda_mixer_amp_switch_info" },
	{ 0xe74529c7, "snd_hda_codec_setup_stream" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x193db696, "snd_hda_mixer_amp_volume_info" },
	{ 0x72bb1910, "query_amp_caps" },
	{ 0x9520ea1c, "hda_get_autocfg_input_label" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0xeba55f09, "snd_hda_set_vmaster_tlv" },
	{ 0x3f5b7c3, "snd_hda_codec_amp_init_stereo" },
	{ 0xa00d1d95, "snd_hda_get_connections" },
	{ 0x49bd4584, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4441ecbe, "snd_hda_codec_amp_update" },
	{ 0xb4477770, "snd_hda_apply_verbs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "86412857911A86C2F2BBA61");
MODULE_INFO(rhelversion, "8.0");
