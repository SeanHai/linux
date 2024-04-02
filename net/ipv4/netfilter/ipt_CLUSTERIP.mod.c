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
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb8099651, "proc_create_data" },
	{ 0x91715312, "sprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0xb893b626, "seq_release" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x22948148, "nf_ct_netns_put" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x996dfd03, "refcount_dec_and_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x27e1a049, "printk" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xfaeccbec, "nf_register_net_hook" },
	{ 0xfb693b68, "nf_unregister_net_hook" },
	{ 0xd2c9e900, "proc_remove" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xcdf36319, "seq_open" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc8df8267, "dev_mc_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf1309ab, "dev_mc_del" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "847AB13C8BE41BB4836E18A");
MODULE_INFO(rhelversion, "8.0");
