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
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x70f7ee9f, "snd_pcm_hw_rule_noresample" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x9ba2e227, "snd_ac97_tune_hardware" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x1d17e2d1, "snd_mpu401_uart_new" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcf01a3e7, "snd_pci_quirk_lookup" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x91715312, "sprintf" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x2853be5a, "snd_ac97_get_short_name" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x3f8db520, "snd_pcm_sgbuf_ops_page" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x7c8e022f, "release_and_free_resource" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfd12ba98, "snd_ac97_suspend" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xa166740, "snd_ac97_update_power" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xd03402f9, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe56ffa8, "snd_ac97_bus" },
	{ 0x75870b9a, "snd_sgbuf_get_chunk_size" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f44006a, "snd_ac97_mixer" },
	{ 0xc035b25e, "snd_ac97_update_bits" },
	{ 0xc7d5eb66, "snd_ac97_set_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xa6106129, "param_ops_long" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xe47073f1, "snd_pcm_add_chmap_ctls" },
	{ 0x113759a6, "snd_pcm_limit_hw_rates" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x28318305, "snprintf" },
	{ 0x8a22a550, "snd_ac97_resume" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-ac97-codec,snd-mpu401-uart,snd";

MODULE_ALIAS("pci:v00001106d00003058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FFA9CE491D29A165DC5BD0B");
MODULE_INFO(rhelversion, "8.0");
