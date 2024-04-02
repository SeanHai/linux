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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7e0f6775, "snd_ac97_read" },
	{ 0x70f7ee9f, "snd_pcm_hw_rule_noresample" },
	{ 0xea2b701b, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xddd922f9, "__snd_util_memblk_new" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0x1d5f0bd9, "snd_device_free" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xaf8bc0bd, "snd_util_memhdr_free" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x98129232, "snd_pcm_lib_preallocate_pages" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x4898b4a9, "__snd_util_mem_free" },
	{ 0x91715312, "sprintf" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x91185511, "down_read" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3f8db520, "snd_pcm_sgbuf_ops_page" },
	{ 0xfb578fc5, "memset" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x1d5c818a, "snd_ac97_update" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x1c429fba, "snd_timer_new" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x62055975, "snd_cards" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x85142f62, "up_write" },
	{ 0xdde7ff7a, "snd_util_memhdr_new" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x8817d796, "__snd_util_mem_alloc" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xfd12ba98, "snd_ac97_suspend" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x313d0dd8, "iommu_get_domain_for_dev" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa5fdae48, "iommu_present" },
	{ 0x7e75accd, "snd_ctl_remove_id" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xd03402f9, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe56ffa8, "snd_ac97_bus" },
	{ 0xa1391e22, "snd_ctl_remove" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f44006a, "snd_ac97_mixer" },
	{ 0xc035b25e, "snd_ac97_update_bits" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x420d86a7, "snd_timer_interrupt" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xa9c53bfd, "snd_seq_device_new" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28318305, "snprintf" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x8a22a550, "snd_ac97_resume" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x8e464315, "snd_ac97_write_cache" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-ac97-codec,snd-util-mem,snd,snd-rawmidi,snd-timer,snd-hwdep,snd-seq-device";

MODULE_ALIAS("pci:v00001102d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29195181EC5CCF0B511CAE4");
MODULE_INFO(rhelversion, "8.0");
