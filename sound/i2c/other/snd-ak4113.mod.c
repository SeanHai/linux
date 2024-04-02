#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xf18c4bea, "_snd_pcm_stream_lock_irqsave" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf22f31e0, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xba74c4c6, "snd_pcm_stop" },
	{ 0xae307d4b, "snd_ctl_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "6728069D3DE81795B9AB0B9");
MODULE_INFO(rhelversion, "8.0");
