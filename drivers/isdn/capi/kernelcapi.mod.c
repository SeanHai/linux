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
	{ 0x15a4c106, "proc_create_seq_private" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xd1306c13, "blocking_notifier_chain_unregister" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe8200fae, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67d83e37, "blocking_notifier_chain_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x121da905, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C09F8A0583A9154A7860AAC");
MODULE_INFO(rhelversion, "8.0");
