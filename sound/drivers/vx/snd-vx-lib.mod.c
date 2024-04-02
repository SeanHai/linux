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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x59427e5b, "snd_ctl_boolean_stereo_info" },
	{ 0x8185c800, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x4ff23c91, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xcb0e9def, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "BD5FDADBA7EDDA06476030D");
MODULE_INFO(rhelversion, "8.0");
