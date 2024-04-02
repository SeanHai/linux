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
	{ 0x2d3385d3, "system_wq" },
	{ 0xaf5dfe39, "mISDN_unregister_Bprotocol" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xd285995f, "mISDN_clock_get" },
	{ 0xd257960c, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x318f7969, "add_timer" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf2b78be0, "mISDN_register_Bprotocol" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa047947, "class_destroy" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x121da905, "queue_work_on" },
	{ 0x509f625d, "consume_skb" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";


MODULE_INFO(srcversion, "3F0C98327999D8A44040AE8");
MODULE_INFO(rhelversion, "8.0");
