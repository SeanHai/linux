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
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x98129232, "snd_pcm_lib_preallocate_pages" },
	{ 0x91715312, "sprintf" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3f8db520, "snd_pcm_sgbuf_ops_page" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x7c8e022f, "release_and_free_resource" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x1ef49199, "snd_pcm_hw_rule_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x28318305, "snprintf" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";

MODULE_ALIAS("pci:v00001057d00003410sv0000ECC0sd000000B0bc*sc*i*");

MODULE_INFO(srcversion, "7BE08F9D927B4B62DF739D0");
MODULE_INFO(rhelversion, "8.0");
