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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xea7bc40d, "tm6000_unregister_extension" },
	{ 0x2028684a, "tm6000_register_extension" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xcc7c9e41, "snd_component_add" },
	{ 0x91715312, "sprintf" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x50af801c, "tm6000_set_audio_bitrate" },
	{ 0x5d3ca0c0, "tm6000_set_reg_mask" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0x47100a37, "snd_pcm_hw_constraint_pow2" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x27e1a049, "printk" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x8478ce21, "snd_pcm_stream_unlock" },
	{ 0xc0cada8, "snd_pcm_stream_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,tm6000,snd";


MODULE_INFO(srcversion, "2B0B12EDF5C45E813D10084");
MODULE_INFO(rhelversion, "8.0");
