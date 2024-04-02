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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x24565c07, "net_rwsem" },
	{ 0xea2b701b, "up_read" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x5c503157, "nf_queue_nf_hook_drop" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0xe9000478, "nf_nat_hook" },
	{ 0x7db7e045, "ip_ct_attach" },
	{ 0x41715c18, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0xd1f0de11, "inet_proto_csum_replace4" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x2cefa38, "proc_set_user" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe8a7fef6, "__skb_checksum" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb15b4109, "crc32c" },
	{ 0x6a3de870, "nla_policy_len" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x91185511, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0x7bfde23d, "nf_log_packet" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x206f4727, "nf_checksum_partial" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa401fda3, "__krealloc" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x318f7969, "add_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x61b4c929, "nf_checksum" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x123130e4, "param_get_uint" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x48cf37da, "nf_ct_hook" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x6dbad168, "param_set_uint" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x28318305, "snprintf" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x467ba543, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x89a5f4cb, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcrc32c";


MODULE_INFO(srcversion, "A809D13A81176E0A0F23361");
MODULE_INFO(rhelversion, "8.0");
