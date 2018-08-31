/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.
* Used org.franca.core 0.9.1.201412191134.
*
* generated by Voice CodeGen Version: R1_v1.3.0
* generated on: Sat Nov 05 14:44:28 IST 2016
*/
#ifndef V1_COM_HARMAN_MMPRES_Media_Player_PROXY_BASE_HPP_
#define V1_COM_HARMAN_MMPRES_Media_Player_PROXY_BASE_HPP_

#include <v1/com/harman/mmpres/MediaPlayer.hpp>


#include <v1/com/harman/mmpres/MMPresTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace harman {
namespace mmpres {

class MediaPlayerProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableReadonlyAttribute<uint64_t> CurrentPlayTimeAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<uint64_t> TotalPlayDurationAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::tTrackState> TrackStateAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::tNowPlayingInfo> NowPlayingDataAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::ePlayState> PlayStateAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::eTrackSeekSpeed> SpeedAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::eRepeatMode> RepeatModeAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::eShuffleMode> ShuffleModeAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::eArtWorkAvailabilityStatus> NowPlayingArtworkStatusAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<::v1::com::harman::mmpres::MMPresTypes::MetadataItemList> PlaybackPreviewAttribute;
    typedef CommonAPI::ObservableReadonlyAttribute<bool> VideoPlayStatusAttribute;

    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> NextAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> PreviousAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> PauseAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> ResumeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> SeekToTimeAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> FastForwardAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> FastReverseAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> SetRepeatAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::eCallResult&)> SetShuffleAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::tAlbumArtInformation&)> GetNowPlayingAlbumArtInformationAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&)> GetNowPlayingAlbumArtPathAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::vector<uint8_t>&)> GetNowPlayingAlbumArtDataAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v1::com::harman::mmpres::MMPresTypes::tAlbumArtInformation&)> GetAlbumArtInformationForTrackAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&)> GetAlbumArtPathForTrackAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::vector<uint8_t>&)> GetAlbumArtDataForTrackAsyncCallback;

    virtual CurrentPlayTimeAttribute& getCurrentPlayTimeAttribute() = 0;
    virtual TotalPlayDurationAttribute& getTotalPlayDurationAttribute() = 0;
    virtual TrackStateAttribute& getTrackStateAttribute() = 0;
    virtual NowPlayingDataAttribute& getNowPlayingDataAttribute() = 0;
    virtual PlayStateAttribute& getPlayStateAttribute() = 0;
    virtual SpeedAttribute& getSpeedAttribute() = 0;
    virtual RepeatModeAttribute& getRepeatModeAttribute() = 0;
    virtual ShuffleModeAttribute& getShuffleModeAttribute() = 0;
    virtual NowPlayingArtworkStatusAttribute& getNowPlayingArtworkStatusAttribute() = 0;
    virtual PlaybackPreviewAttribute& getPlaybackPreviewAttribute() = 0;
    /**
     * description: Indicates playback video only,true: start video play; false: stop
     */
    virtual VideoPlayStatusAttribute& getVideoPlayStatusAttribute() = 0;


    virtual void next(const uint64_t &_step, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> nextAsync(const uint64_t &_step, NextAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void previous(const uint64_t &_step, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> previousAsync(const uint64_t &_step, PreviousAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void pause(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> pauseAsync(PauseAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void resume(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> resumeAsync(ResumeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void seekToTime(const uint64_t &_timePosition, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> seekToTimeAsync(const uint64_t &_timePosition, SeekToTimeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void fastForward(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> fastForwardAsync(FastForwardAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void fastReverse(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> fastReverseAsync(FastReverseAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setRepeat(const ::v1::com::harman::mmpres::MMPresTypes::eRepeatMode &_mode, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setRepeatAsync(const ::v1::com::harman::mmpres::MMPresTypes::eRepeatMode &_mode, SetRepeatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void setShuffle(const ::v1::com::harman::mmpres::MMPresTypes::eShuffleMode &_mode, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::eCallResult &_result, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> setShuffleAsync(const ::v1::com::harman::mmpres::MMPresTypes::eShuffleMode &_mode, SetShuffleAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getNowPlayingAlbumArtInformation(CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::tAlbumArtInformation &_albumArtInfo, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getNowPlayingAlbumArtInformationAsync(GetNowPlayingAlbumArtInformationAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getNowPlayingAlbumArtPath(const uint8_t &_imageNumber, CommonAPI::CallStatus &_internalCallStatus, std::string &_path, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getNowPlayingAlbumArtPathAsync(const uint8_t &_imageNumber, GetNowPlayingAlbumArtPathAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getNowPlayingAlbumArtData(const uint8_t &_imageNumber, CommonAPI::CallStatus &_internalCallStatus, std::vector<uint8_t> &_albumArtData, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getNowPlayingAlbumArtDataAsync(const uint8_t &_imageNumber, GetNowPlayingAlbumArtDataAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getAlbumArtInformationForTrack(const uint64_t &_trackId, CommonAPI::CallStatus &_internalCallStatus, ::v1::com::harman::mmpres::MMPresTypes::tAlbumArtInformation &_albumArtInfo, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getAlbumArtInformationForTrackAsync(const uint64_t &_trackId, GetAlbumArtInformationForTrackAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getAlbumArtPathForTrack(const uint64_t &_trackId, const uint8_t &_imageNumber, CommonAPI::CallStatus &_internalCallStatus, std::string &_path, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getAlbumArtPathForTrackAsync(const uint64_t &_trackId, const uint8_t &_imageNumber, GetAlbumArtPathForTrackAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void getAlbumArtDataForTrack(const uint64_t &_trackId, const uint8_t &_imageNumber, CommonAPI::CallStatus &_internalCallStatus, std::vector<uint8_t> &_albumArtData, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getAlbumArtDataForTrackAsync(const uint64_t &_trackId, const uint8_t &_imageNumber, GetAlbumArtDataForTrackAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace mmpres
} // namespace harman
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_HARMAN_MMPRES_Media_Player_PROXY_BASE_HPP_
