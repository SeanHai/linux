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
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xe30d174f, "driver_for_each_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3ee1af7d, "cx18_ext_init" },
	{ 0x999e8297, "vfree" },
	{ 0xc0cada8, "snd_pcm_stream_lock" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xd2135aae, "cx18_stop_v4l2_encode_stream" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3ad6853e, "cx18_release_stream" },
	{ 0x3d8edb11, "cx18_claim_stream" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8478ce21, "snd_pcm_stream_unlock" },
	{ 0xd990ca29, "cx18_start_v4l2_encode_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x28318305, "snprintf" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x79508c99, "driver_find" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,cx18,snd";


MODULE_INFO(srcversion, "10F36FC040B50BB288F8813");
MODULE_INFO(rhelversion, "8.0");
