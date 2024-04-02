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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x1cec7d80, "xt_unregister_matches" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x2431ba19, "xt_register_matches" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x15a4c106, "proc_create_seq_private" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x999e8297, "vfree" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4CD7715F46F15526BC138C5");
MODULE_INFO(rhelversion, "8.0");
