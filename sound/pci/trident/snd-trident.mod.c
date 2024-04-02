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
	{ 0x3737ae5c, "snd_util_mem_avail" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xddd922f9, "__snd_util_memblk_new" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x1d17e2d1, "snd_mpu401_uart_new" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xaf8bc0bd, "snd_util_memhdr_free" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x98129232, "snd_pcm_lib_preallocate_pages" },
	{ 0x4898b4a9, "__snd_util_mem_free" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x3f8db520, "snd_pcm_sgbuf_ops_page" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xdde7ff7a, "snd_util_memhdr_new" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x61651be, "strcat" },
	{ 0xfd12ba98, "snd_ac97_suspend" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe56ffa8, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f44006a, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x8a22a550, "snd_ac97_resume" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-util-mem,snd-mpu401-uart,snd,snd-ac97-codec";

MODULE_ALIAS("pci:v00001023d00002000sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v00001023d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007018sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DB88D2D2328503E7D1C1FE2");
MODULE_INFO(rhelversion, "8.0");
