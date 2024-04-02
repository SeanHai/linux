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
	{ 0xabebe54e, "snd_ac97_write" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf10de535, "ioread8" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfd12ba98, "snd_ac97_suspend" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe56ffa8, "snd_ac97_bus" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f44006a, "snd_ac97_mixer" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x8a22a550, "snd_ac97_resume" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-ac97-codec,snd-pcm,snd";

MODULE_ALIAS("pci:v00008086d00002416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002426sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002486sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000069sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000089sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D48F85FCCD712DF70594E07");
MODULE_INFO(rhelversion, "8.0");
