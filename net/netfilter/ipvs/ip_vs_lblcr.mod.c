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
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6b0b7c28, "unregister_ip_vs_scheduler" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x6324745b, "register_ip_vs_scheduler" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x61415c0, "ip_vs_scheduler_err" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x467ba543, "register_net_sysctl" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xed946a48, "init_net" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "7B995D74F413CB6B3686AEE");
MODULE_INFO(rhelversion, "8.0");
