use Illuminate\Http\Request;
use Illuminate\Support\Facades\Route;

Route::post('/sensor', function (Request $request) {
    return response()->json([
        'status' => 'Data diterima',
        'data' => $request->all()
    ]);
});
