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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6413c273, "nvme_fc_register_localport" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xd12e564, "nvme_fc_register_remoteport" },
	{ 0x51e67f3b, "nvmet_fc_rcv_ls_req" },
	{ 0x3884f8b8, "nvme_fc_unregister_localport" },
	{ 0xad0413d4, "match_hex" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x87b8798d, "sg_next" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa3503a5e, "device_create_with_groups" },
	{ 0x7fa5302a, "nvmet_fc_rcv_fcp_abort" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfca9dc99, "nvme_fc_unregister_remoteport" },
	{ 0x9ef76d99, "nvmet_fc_unregister_targetport" },
	{ 0x4e3567f7, "match_int" },
	{ 0x1048b92a, "nvmet_fc_rcv_fcp_req" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1aebf90d, "nvmet_fc_register_targetport" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xa047947, "class_destroy" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xce2ba1bd, "__class_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-fc,nvmet-fc";


MODULE_INFO(srcversion, "B9C15F17935098B28315540");
MODULE_INFO(rhelversion, "8.0");
