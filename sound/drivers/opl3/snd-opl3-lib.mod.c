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
	{ 0x1d5f0bd9, "snd_device_free" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1c429fba, "snd_timer_new" },
	{ 0x27e1a049, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x7c8e022f, "release_and_free_resource" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x420d86a7, "snd_timer_interrupt" },
	{ 0xa9c53bfd, "snd_seq_device_new" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-timer,snd-hwdep,snd-seq-device";


MODULE_INFO(srcversion, "20303E83F6204B9388C1479");
MODULE_INFO(rhelversion, "8.0");
