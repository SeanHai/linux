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
	{ 0x19a86100, "rdma_nl_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x833597db, "rdma_nl_unicast_wait" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x3af99bdd, "ib_modify_qp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xec3fe51f, "ibnl_put_attr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0xed946a48, "init_net" },
	{ 0x7ba5bc24, "rdma_nl_multicast" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75a729a0, "rdma_nl_unregister" },
	{ 0xe2e018f8, "nla_validate" },
	{ 0xf977d377, "rdma_nl_unicast" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x121da905, "queue_work_on" },
	{ 0x509f625d, "consume_skb" },
	{ 0x467ba543, "register_net_sysctl" },
	{ 0xbf5237b9, "ibnl_put_msg" },
	{ 0x3379d764, "down_timeout" },
	{ 0xd542439, "__ipv6_addr_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "138DD5FB3876EB7EA2B465D");
MODULE_INFO(rhelversion, "8.0");
