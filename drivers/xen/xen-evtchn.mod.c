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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8b2cd3a4, "irq_to_desc" },
	{ 0x28cde093, "no_llseek" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0x6bddef80, "misc_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x8a78989f, "irq_from_evtchn" },
	{ 0xeefe30ef, "xen_rebind_evtchn_to_cpu" },
	{ 0xe007edf, "xen_evtchn_nr_channels" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xeeb04e7b, "xen_event_channel_op_compat" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc7002ac4, "evtchn_make_refcounted" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0xcca5839d, "xen_vcpu_id" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9877db88, "cpumask_next_and" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE4A3D5A102B1D5A92845ED");
MODULE_INFO(rhelversion, "8.0");
