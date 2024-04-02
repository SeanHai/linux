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
	{ 0x9e6a466, "register_pernet_device" },
	{ 0xde320733, "sockfd_lookup" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xb4f05f54, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa317e6b9, "sock_release" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xe13bfd58, "sock_create_kern" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0x35692d38, "inet6_csk_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5eaeb6b2, "udp_sock_create6" },
	{ 0x6fb8ef20, "setup_udp_tunnel_sock" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd49bf999, "kernel_connect" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa19adae5, "kernel_sock_shutdown" },
	{ 0xa592a1a, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc46383c0, "sk_dst_check" },
	{ 0x50d83074, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xddf11bf7, "udp_set_csum" },
	{ 0x4711e547, "kernel_bind" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xcc616694, "udp_sock_create4" },
	{ 0x121da905, "queue_work_on" },
	{ 0xc666080d, "ip_queue_xmit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_udp_tunnel,udp_tunnel";


MODULE_INFO(srcversion, "F3BEB17BFB0556BAEE3DD94");
MODULE_INFO(rhelversion, "8.0");
