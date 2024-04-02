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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7e0f6775, "snd_ac97_read" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x467816a6, "snd_ak4114_resume" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x4dc10399, "snd_i2c_device_create" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0x2809d1f2, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x6e2149a3, "snd_ak4113_create" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x9cb46dce, "_snd_ctl_add_slave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x2a9707af, "snd_ak4113_external_rate" },
	{ 0xa501e8c7, "snd_ak4113_build" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xce2f0762, "snd_pt2258_build_controls" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x59427e5b, "snd_ctl_boolean_stereo_info" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2d261d90, "snd_akm4xxx_reset" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xe30dc660, "snd_ak4114_build" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0xbd192a21, "snd_pt2258_reset" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfd12ba98, "snd_ac97_suspend" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x3ed22ca7, "snd_ice1712_akm4xxx_free" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xa302978b, "snd_i2c_bus_create" },
	{ 0x80f21e2b, "snd_ctl_make_virtual_master" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xd03402f9, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe56ffa8, "snd_ac97_bus" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x214d2683, "snd_ak4114_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f44006a, "snd_ac97_mixer" },
	{ 0x6645f5af, "snd_ak4114_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xdbcf665a, "snd_ak4114_external_rate" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe83886b7, "snd_ak4114_reinit" },
	{ 0xe4ef15dc, "snd_akm4xxx_write" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x8a22a550, "snd_ac97_resume" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x8e464315, "snd_ac97_write_cache" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x5a4e3a0b, "snd_rawmidi_transmit_empty" },
	{ 0x2f3877e3, "snd_ice1712_akm4xxx_init" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-ac97-codec,snd-ak4114,snd-pcm,snd-i2c,snd-ice17xx-ak4xxx,snd-ak4113,snd-rawmidi,snd-pt2258,snd-ak4xxx-adda";

MODULE_ALIAS("pci:v00001412d00001724sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1C0BBE480D2546A4DBE9E10");
MODULE_INFO(rhelversion, "8.0");
