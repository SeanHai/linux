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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x59427e5b, "snd_ctl_boolean_stereo_info" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22e16d8e, "snd_pcm_set_sync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xba63db57, "snd_card_free" },
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
"depends=snd,snd-pcm";

MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B321bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B401bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B601bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B701bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B421bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B621bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B721bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D321bc*sc*i*");

MODULE_INFO(srcversion, "0AEA75B69F983D424BE8FF6");
MODULE_INFO(rhelversion, "8.0");
