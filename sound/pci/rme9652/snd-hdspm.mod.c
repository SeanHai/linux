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
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x39bf9301, "_snd_pcm_hw_param_setempty" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3f8db520, "snd_pcm_sgbuf_ops_page" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x47100a37, "snd_pcm_hw_constraint_pow2" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x94098ff8, "snd_interval_list" },
	{ 0xc9e4d988, "snd_card_set_id" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x1ef49199, "snd_pcm_hw_rule_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x28318305, "snprintf" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x5a4e3a0b, "snd_rawmidi_transmit_empty" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-rawmidi,snd-hwdep";

MODULE_ALIAS("pci:v000010EEd00003FC6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1ABD04E095C2B2DE15364F3");
MODULE_INFO(rhelversion, "8.0");
