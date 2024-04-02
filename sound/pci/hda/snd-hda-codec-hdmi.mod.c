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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf5b942, "snd_hdac_i915_set_bclk" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa7b3dbbd, "snd_hda_get_num_devices" },
	{ 0xe47b592, "snd_hda_jack_detect_enable" },
	{ 0xcae2bc88, "snd_hda_multi_out_dig_prepare" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x1d5f0bd9, "snd_device_free" },
	{ 0xe4e07754, "snd_hdac_print_channel_allocation" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xeda3a721, "snd_print_pcm_bits" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x31c00626, "snd_hdac_get_sub_nodes" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0xaac7c645, "snd_hda_override_conn_list" },
	{ 0x91715312, "sprintf" },
	{ 0x67bfe791, "snd_hdac_spk_to_chmap" },
	{ 0x64ff8c65, "snd_hda_spdif_ctls_unassign" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x27253169, "snd_hda_jack_detect_enable_callback" },
	{ 0x601d3d6, "snd_hdac_check_power_state" },
	{ 0x37d9ebc6, "snd_hdac_acomp_get_eld" },
	{ 0x7126e510, "snd_hda_pin_sense" },
	{ 0xa8c57f5d, "snd_hdac_regmap_write_raw" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x4c7ec4b6, "snd_hdac_get_ch_alloc_from_ca" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x46436fc7, "snd_hda_codec_set_power_to_all" },
	{ 0xf572398f, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0xb037c1bb, "snd_hdac_setup_channel_mapping" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0xbaa4507, "snd_hda_set_dev_select" },
	{ 0x164f080c, "snd_hdac_power_down_pm" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xefc8c7b8, "snd_jack_new" },
	{ 0x41587b11, "snd_hda_spdif_ctls_assign" },
	{ 0xa8f9b878, "is_jack_detectable" },
	{ 0xff5a7d10, "snd_hdac_register_chmap_ops" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0x55b8913e, "snd_hda_spdif_out_of_nid" },
	{ 0x37ed24e4, "snd_hda_jack_tbl_get" },
	{ 0xf89ffe4d, "snd_hda_sequence_write" },
	{ 0x4ee6efe0, "snd_hda_ctl_add" },
	{ 0xe6478472, "_dev_info" },
	{ 0x73187668, "snd_hdac_i915_register_notifier" },
	{ 0xa322e214, "snd_hda_multi_out_dig_close" },
	{ 0x9d290369, "snd_hda_create_dig_out_ctls" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xce4fa21e, "snd_hda_codec_update_widgets" },
	{ 0xf5080a7f, "snd_hda_get_dev_select" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x77c754a8, "snd_hdac_chmap_to_spk_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x7c12eb83, "__snd_hda_codec_cleanup_stream" },
	{ 0xf5fb0a65, "snd_hda_codec_pcm_new" },
	{ 0x6ac8982, "snd_hda_jack_add_kctl" },
	{ 0x74d6b6c2, "snd_hdac_query_supported_pcm" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0x607c821d, "snd_hda_multi_out_dig_open" },
	{ 0xc6e53882, "snd_hda_jack_tbl_get_from_tag" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xe7b0c875, "snd_hda_codec_get_pincfg" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0xe47073f1, "snd_pcm_add_chmap_ctls" },
	{ 0xdefc2c94, "snd_hdac_channel_allocation" },
	{ 0xe74529c7, "snd_hda_codec_setup_stream" },
	{ 0xb42c1d69, "snd_jack_report" },
	{ 0x28318305, "snprintf" },
	{ 0x4eafd531, "snd_hda_jack_set_dirty_all" },
	{ 0x4bc7eb8a, "snd_hdac_add_chmap_ctls" },
	{ 0x8be1ac4c, "snd_hda_jack_report_sync" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0xdfb77a11, "snd_hdac_sync_audio_rate" },
	{ 0x14aa6182, "snd_hdac_power_up_pm" },
	{ 0xa00d1d95, "snd_hda_get_connections" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd,snd-hda-codec,snd-pcm";

MODULE_ALIAS("hdaudio:v1002793Cr*a01*");
MODULE_ALIAS("hdaudio:v10027919r*a01*");
MODULE_ALIAS("hdaudio:v1002791Ar*a01*");
MODULE_ALIAS("hdaudio:v1002AA01r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v10DE0001r*a01*");
MODULE_ALIAS("hdaudio:v10DE0002r*a01*");
MODULE_ALIAS("hdaudio:v10DE0003r*a01*");
MODULE_ALIAS("hdaudio:v10DE0004r*a01*");
MODULE_ALIAS("hdaudio:v10DE0005r*a01*");
MODULE_ALIAS("hdaudio:v10DE0006r*a01*");
MODULE_ALIAS("hdaudio:v10DE0007r*a01*");
MODULE_ALIAS("hdaudio:v10DE0008r*a01*");
MODULE_ALIAS("hdaudio:v10DE0009r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0045r*a01*");
MODULE_ALIAS("hdaudio:v10DE0050r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0052r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0061r*a01*");
MODULE_ALIAS("hdaudio:v10DE0062r*a01*");
MODULE_ALIAS("hdaudio:v10DE0067r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE0073r*a01*");
MODULE_ALIAS("hdaudio:v10DE0074r*a01*");
MODULE_ALIAS("hdaudio:v10DE0076r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Br*a01*");
MODULE_ALIAS("hdaudio:v10DE007Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Er*a01*");
MODULE_ALIAS("hdaudio:v10DE0080r*a01*");
MODULE_ALIAS("hdaudio:v10DE0081r*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE0084r*a01*");
MODULE_ALIAS("hdaudio:v10DE0090r*a01*");
MODULE_ALIAS("hdaudio:v10DE0091r*a01*");
MODULE_ALIAS("hdaudio:v10DE0092r*a01*");
MODULE_ALIAS("hdaudio:v10DE0093r*a01*");
MODULE_ALIAS("hdaudio:v10DE0094r*a01*");
MODULE_ALIAS("hdaudio:v10DE0095r*a01*");
MODULE_ALIAS("hdaudio:v10DE0097r*a01*");
MODULE_ALIAS("hdaudio:v10DE0098r*a01*");
MODULE_ALIAS("hdaudio:v10DE0099r*a01*");
MODULE_ALIAS("hdaudio:v10DE8001r*a01*");
MODULE_ALIAS("hdaudio:v10DE8067r*a01*");
MODULE_ALIAS("hdaudio:v11069F80r*a01*");
MODULE_ALIAS("hdaudio:v11069F81r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v8086280Cr*a01*");
MODULE_ALIAS("hdaudio:v8086280Dr*a01*");
MODULE_ALIAS("hdaudio:v80862800r*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");

MODULE_INFO(srcversion, "30FDE4AAF9F21DA4CCFA064");
MODULE_INFO(rhelversion, "8.0");
