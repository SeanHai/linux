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
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x68f00048, "snd_pcm_hw_constraint_ratnums" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0x8d710940, "pci_match_id" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3f8db520, "snd_pcm_sgbuf_ops_page" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";

MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd000013EBbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000879sv00000070sd000013EBbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd0000FF01bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd0000FF07bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001002sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000107Dsd00006606bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd00000012bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000121Asd00003000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000144Fsd00003000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001554sd00004011bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000BD11sd00001200bc*sc*i*");

MODULE_INFO(srcversion, "17A547B7237282A06726F10");
MODULE_INFO(rhelversion, "8.0");
